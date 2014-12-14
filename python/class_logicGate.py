#!/usr/bin/python
class LogicGate:

   def __init__(self, n):
      self.label = n
      self.output = None

   def getLabel(self):
      return self.label

   def getOutput(self):
      self.output = self.performGateLogic()
      return self.output

class BinaryGate(LogicGate):

   def __init__(self, n):
      LogicGate.__init__(self,n)

      self.pinA = None
      self.pinB = None

   def getPinA(self):
      return int(input("Enter Pin A input for gate"+ self.getLabel() +"-->"))

   def getPinB(self):
      return int(input("Enter Pin B input for gate"+ self.getLabel()+"-->"))

class UnaryGate(LogicGate):

   def __init__(self, n):
      LogicGate.__init__(self, n)

      self.pin = None

   def getPin(self):
      return int(input("Enter Pin input for gate"+ self.getLabel()+"-->"))

class AndGate(BinaryGate):

   def __init__(self, n):
      BinaryGate.__init__(self, n)

   def performGateLogic(self):

      a = self.getPinA()
      b = self.getPinB()

      if a==1 and b==1:
         return 1
      else:
         return 0

class OrGate(BinaryGate):

   def __init__(self, n):
      BinaryGate.__init__(self, n)

   def performGateLogic(self):

      a = self.getPinA()
      b = self.getPinB()

      if a==1 or b==1:
         return 1
      else:
         return 0

class NotGate(UnaryGate):

   def __init__(self, n):
      UnaryGate.__init__(self, n)

   def performGateLogic(self):

      a = self.getPin()

      if a==1:
         return 0
      else:
         return 1

class Connector:

   def __init__(self, fGate, tGate):
      self.fromGate = fGate
      self.toGate   = tGate

      tGate.setNextPin(self)

   def getFrom(self):
      return self.fromGate

   def getTo(self):
      return self.toGate

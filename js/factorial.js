var factorial = function factorial(i, a) {
   a = a || 1;

   if(i < 2) {
      return a;
   }

   return factorial(i - 1, a * i);
};

document.writeln(factorial(1000));


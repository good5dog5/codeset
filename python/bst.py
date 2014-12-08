#!/usr/bin/python
class Node:
    def __init__(self, data):
        self.left = None
        self.right = None
        self.data = data

    def insert(self , data):
        if data < self.data:
            if self.left is None:
                self.left = Node(data)
            else:
                self.left.insert(data)
        elif data > self.data:
            if self.right is None:
                self.right = Node(data)
            else:
                self.right.insert(data)

    def lookup(self, data, parent=None):
        if data < self.data:
            if self.left is None:
                return None, None
            return self.left.lookup(data, self)
        elif data > self.data:
            if self.right is None:
                return None, None
            return self.right.lookup(data, self)
        else:
            return self, parent

    def delete(self, data):
        node, parent = self.lookup(data)
        if node is not None:
            children_count = node.children_count

            if children_count == 0:
                if parent:
                    if parent.left is node:
                        parent = None
                    else:
                        parent.right = None
                del node

            elif children_count == 1:
                if node.left:
                    n = node.left
                else:
                    n = node.right
                if parent:
                    if parent.left is node:
                        parent.left = n
                    else:
                        parent.right = n
                del node

            else:
            # if node has 2 childern
            # find its successor 
                parent = node
                successor = node.right
                while successor.left:
                    parent = successor
                    successor = successor.left
                # replace node data by its successor data
                node.data = successor.data
                #fix successor's parent's child
                if parent.left == successor:
                    parent.left == successor.right
                else:
                    parent.right = successor.right

    def print_tree(self):
        if self.left:
            self.left.print_tree()
        print self.data,
        if self.right:
            self.right.print_tree()



    def children_count(self):
        cnt = o
        if self.left:
            cnt += 1
        if self.right:
            cnt += 1

        return cnt

if __name__ == '__main__':
    treeNode = [5,7,2,1,11,13,4,4,8]
    root = Node(treeNode.pop())
    while treeNode:
        root.insert(treeNode.pop())

    root.print_tree()

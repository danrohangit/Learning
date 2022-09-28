class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

class LinkedLists:
    def __init__(self):
        self.head = None
        
    def printList(self):
        currentValue = self.head
        
        while currentValue != None:
            if currentValue.data == 2:
                newValue = Node('Zero')
                
                newValue.next = currentValue.next
                currentValue.next = newValue
                
            print(currentValue.data)
            currentValue = currentValue.next
        
if __name__ == '__main__':
    
    lList = LinkedLists()
    
    lList.head = Node(1)
    secondValue = Node(2)
    thirdValue = Node(3)
    
    lList.head.next = secondValue
    secondValue.next = thirdValue
    
    lList.printList()

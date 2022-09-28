class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
    
class linkedLists:
    def __init__(self):
        self.head = None
        
    def traverseNode(self):
        currentValue = self.head
        
        while currentValue != None:
            if currentValue.data == 'u':
                newNode = Node('ORA')
                newNode.next = currentValue.next
                currentValue.next = newNode
            print(currentValue.data)
            currentValue = currentValue.next
     
    def deleteNode(self):
        currentValue = self.head
        count = 0
        
        print("============================")
        while currentValue != None:
            count = count + 1
            
            if count == 1:
                print(currentValue.data)
                currentValue = currentValue.next.next
            else:
                print(currentValue.data)
                currentValue = currentValue.next
        
if __name__ == '__main__':
    
    lList = linkedLists()
    
    lList.head = Node('s')
    secondNode = Node('u')
    thirdNode = Node('s')
    
    lList.head.next = secondNode
    secondNode.next = thirdNode
    
    lList.traverseNode()
    
    lList.deleteNode()

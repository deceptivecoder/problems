# pseudo code
# 1. traverse array till left is less than right
# 2. if element is array at left position is not equal to toMove element then increment left
# 3. if element is array at left position is equals to toMove element and swap with right element
#     and increment left and decrement right
# 4. if element is array at left position is equals to toMove element and also equals to element at
#    right index element then decrement right and look for next element to swap with.

#Time complexity O(n) space compelxity O(1)
def moveElementToEnd(array, toMove):
    left =0
    right = len(array)-1
    while left < right:
        if array[left] != toMove:
            left +=1
        else:
            if array[left] == array[right]:
                right -=1
                continue
            array[left], array[right] = array[right], array[left]
            left += 1
            right -= 1

    return array

if __name__=="__main__":
    array = [2, 2, 2, 5, 4, 9, 0, 2]
    toMove = 1
    print(moveElementToEnd(array, toMove))
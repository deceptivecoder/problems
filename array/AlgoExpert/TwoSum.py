# def twoNumberSum(array, targetsum):
#     for i in range(len(array)-1):
#         firstnum = array[i]
#         for j in range((i+1), len(array)):
#             secondnum = array[j]
#             if(firstnum + secondnum == targetsum):
#                 #print("Pair with targetsum", targetsum,"is: (", firstnum,",",secondnum,")")
#                 return [firstnum, secondnum]
#     #print("pair not found with targetsum:", targetsum)
#     return []

# def twoNumberSum(array, targetsum):
#     nums = {}
#     for num in array:
#         #currentSum = targetsum-num
#         if targetsum-num in nums:
#             print("targetsum-num:", targetsum-num)
#             return [targetsum-num, num]
#         else:
#             nums[num] = True
#             print("nums[num]:", nums)
#     return []

def twoNumberSum(array, targetsum):
    leftidx =0
    rightidx =len(array) -1
    array.sort()

    while leftidx < rightidx:
        currentSum = array[leftidx] + array[rightidx]
        if currentSum == targetsum:
            return [array[leftidx], array[rightidx]]
        elif currentSum < targetsum:
            leftidx += 1
        elif currentSum > targetsum:
            rightidx -= 1
    return []

if __name__ == "__main__":
    array  = [3,5,4,8,11,1,-1,6]
    targetsum = 10
    print(twoNumberSum(array, targetsum))

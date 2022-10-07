def getPowerset(array, idx = None):
    powersets = [[]]
    if idx == None:
        idx = len(array)-1
    elif idx < 0:
        return [[]]
    ele = array[idx]
    powersets = getPowerset(array, idx -1)
    print("ele: ", ele)
    for i in range(len(powersets)):
        print("i: ", i, "powersets[i]:", powersets[i])
        currentset = powersets[i]
        print("currentset: ", currentset)
        powersets.append(currentset + [ele])
        print("powersets: ", powersets)
    return powersets

# itrative solution
# space complexity 0(n*2^n) Time O(n*2^n)
# def getPowerset(array):
#     subsets = [[]]
#     for ele in array:
#         print("ele: ", ele)
#         for i in range(len(subsets)):
#             print("i: ", i, "subsets[i]:", subsets[i])
#             currentSubset = subsets[i]
#             print("currentSubset: ", currentSubset)
#             subsets.append(currentSubset + [ele])
#             print("subsets: ", subsets)
#     return subsets



if __name__=="__main__":
    array = ['a', 'b', 'c']
    print(getPowerset(array))
    print("")

# [[], [1], [2], [1, 2], [3], [1, 3] [2, 3], [1, 2, 3]]
#
# 2^0 = 1
# 2^1 = 2
# 2^2 = 4
# 2^3 = 8


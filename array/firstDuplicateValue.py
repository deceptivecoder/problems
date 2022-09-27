# Time complexity O(n^2) space complexity O(1)
# def firstDuplicateValue(array):
#     for i in range(len(array) - 1):
#         for j in range(i+1, len(array)):
#             if array[i] == array[j]:
#                 return array[i]

# Time complexity O(n) Space complexity O(n)
def firstDuplicateValue(array):
    duplicate = {}

    for i in range(len(array)):
        if array[i] in duplicate:
            return array[i]
        else:
            duplicate[array[i]] = True
    return -1

if __name__ == "__main__":
    array = [7, 1, 5, 2, 3, 4, 4]
    print(firstDuplicateValue(array))
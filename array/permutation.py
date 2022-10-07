
def getPermutations(array):
    permutations = []
    permutationHelper(0, array, permutations)
    return permutations;

def permutationHelper(index, array, permutations):

    #base case
    if index == len(array)-1:
        print("base case: array: ", array, "index: ", index)
        print("\n")
        return permutations.append(array[:])
    else:
        for j in range(index, len(array)):
            swap(array, index, j)
            print("swap array:", array, " index: ", index, " with j: ", j)
            permutationHelper(index+1, array, permutations)
            swap(array, index, j)
            print("backtrack: swap array:", array, " index: ", index, " with j: ", j)

def swap(array, index, j):
    array[index], array[j] = array[j], array[index]

if __name__=="__main__":
    array = ['1', '2', '3']
    print(getPermutations(array))
    print("")


portnames = ["PAN", "AMS", "CAS", "NYC", "HEL"]
 
# def permutations(route, ports):
#     if len(ports) <= 0:
#         print('-'.join([portnames[i] for i in route]))
#         return
#     for port in ports:
#         subroute = route.copy()
#         subroute.append(port)
#         subports = ports.copy()
#         subports.remove(port)
#         permutations(subroute, subports)

# # this will start the recursion with 0 as the first stop
# permutations([0], list(range(1, len(portnames))))

# def permute(route, ports):
#     i = 0
#     for j in range(1, 5):
#         for k in range(1, 5):
#             for l in range(1, 5):
#                 for m in range(1, 5):
#                     route = [j, k, l, m]

#                     if all(elem in route for elem in ports):
#                         route = [i, j, k, l, m]
#                         print(' '.join([portnames[i] for i in route]))

# permute([0], list(range(1, len(portnames))))

def main():
    portnames = ["PAN", "AMS", "CAS", "NYC", "HEL"]

    port1 = 0
    for port2 in range(1, 5):
        for port3 in range(1, 5):
            for port4 in range(1, 5):
                for port5 in range(1, 5):
                    route = [port1, port2, port3, port4, port5]

                    # Modify this if statement to check if the route is valid
                    if port1 != port2 and port1 != port3 and port1 != port4 and port1 != port5 and port2 != port3 and port2 != port4 and port2 != port5 and port3 != port4 and port3 != port5 and port4 != port5:
                        # do not modify this print statement
                        print(' '.join([portnames[i] for i in route]))

main()
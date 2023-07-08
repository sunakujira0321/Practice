from collections import defaultdict

AB = defaultdict(int)

N, K = map(int, input().split())
A = []
B = []
for i in range(N):
    a, b = map(int, input().split())
    A.append(a)
    B.append(b)

# print(A)
# print(B)

sorted_pairs = sorted(zip(A, B))
key_list, value_list = zip(*sorted_pairs)

# print(key_list)
# print(value_list)

kusuri_sum = value_list[N-1]
if kusuri_sum>K:
    print(key_list[N-1]+1)
    exit()

for i in reversed(range(0, N-1)):
    # print(i)
    # print(value_list[i])
    kusuri_sum += value_list[i]
    # print(kusuri_sum)
    if kusuri_sum>K:
        print(key_list[i]+1)
        exit()
print(i+1)


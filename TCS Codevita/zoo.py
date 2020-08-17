cost_of_herbi, cost_of_carni, cost_of_aqua = map(int, input().split())
area_of_herbi, area_of_carni, area_of_aqua = map(int, input().split())
herbi_1, herbi_2 = map(int, input().split())
carni_1, carni_2 = map(int, input().split())
aqua_1, aqua_2 = map(int, input().split())
total_area = int(input())
temp = min(cost_of_herbi, cost_of_carni, cost_of_aqua)
if temp == cost_of_herbi:
    a1 = area_of_herbi * temp
    x = area_of_herbi
elif temp == cost_of_carni:
    a1 = area_of_carni * temp
    x = area_of_carni
else:
    a1 = area_of_aqua * temp
    x = area_of_aqua
temp = max(cost_of_herbi, cost_of_carni, cost_of_aqua)
if temp == cost_of_herbi:
    a2 = herbi_1 * herbi_2 * cost_of_herbi
    y = herbi_1 * herbi_2
elif temp == cost_of_carni:
    a2 = carni_1 * carni_2 * cost_of_carni
    y = carni_1 * carni_2
else:
    a2 = aqua_1 * aqua_2 * cost_of_aqua
    y = aqua_1 * aqua_2
z = total_area - (x + y)
arr = []
arr.append(cost_of_herbi)
arr.append(cost_of_carni)
arr.append(cost_of_aqua)
arr = sorted(arr)
a3 = z * arr[1]
total = a1 + a2 + a3
print(total)

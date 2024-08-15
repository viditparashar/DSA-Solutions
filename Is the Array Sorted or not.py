arr = [1,2,2,3,4,5,6]
asc = True
desc = True

for i in range (len(arr)-1):
    if arr[i] > arr[i+1]:
        asc = False
    if arr[i] < arr[i+1]:
        desc = False
        
if asc == True or desc == True:
    print("Sorted")
else:
    print("Not")

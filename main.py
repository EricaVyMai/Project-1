file = open("Attendance.txt","r") #open the text file
lines = file.readlines() #lines is now a list []
file.close() #close file

pq = [] 

for x in range(len(lines)):
    if(x==0): #skips over the labels using continue
        continue
    pq.append(lines[x].split(",")) #appends each list to 

sum = 0 #init sum
for i in range(len(pq)): #len(pq)==1081 so it will loop from 0 to 1081 for indexing
    sum += float(pq[i][5]) #using list splicing ex: li1 = [[0,1,2],[4,5,6]] li1[0][1] == 1 convert to float bc String

print(sum/len(pq)) #gives me the mean value

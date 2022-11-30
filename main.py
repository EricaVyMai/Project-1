file = open("Attendance.txt","r") #open the text file
lines = file.readlines() #lines is now a list []
file.close() #close file

pq = []

#Hashmap to evaluate occurence of school districts
HM = {

}
#Hashmap to for the total of rates in 2020-2021
SumHM = {

}

for x in range(1,len(lines)):
    pq.append(lines[x].split(",")) #appends each list to 

for i in range(len(pq)): #len(pq)==1081 so it will loop from 0 to 1081 for indexing
    HM[pq[i][1]] = 0 #Will get every single school district in pq
    SumHM[pq[i][1]] = 0

for i in range(len(pq)):
    if(pq[i][1] in HM.keys()): #check for if school is alr in HM (ALWAYS IS)
        HM[pq[i][1]]+=1
    if(pq[i][1] in SumHM.keys()): #Ditto
        SumHM[pq[i][1]]+= float(pq[i][5])

for key, value in HM.items(): #Evaluates For all the keys, the mean for every single School district
    print(f"{key} : {SumHM[key]/value}") 
print(len(HM)) #197 schools

# class OverallGPA:
#     def __init__(self):
#         self.GPA = {
#         'A': 4.0,
#         'B': 3.0,
#         'C': 2.0,
#         'D': 1.0,
#         'F': 0.0
#     }
#         self.grades = []
    
#     def calculateGPA(self):
#         sum1 = 0
#         for i in self.grades:
#             sum1 += self.GPA[i]
#         return float(sum1/len(self.grades))
    
#     def addGrade(self, x):
#         self.grades.append(x)

# GPACalc = OverallGPA()
# GPACalc.addGrade('A')
# GPACalc.addGrade('A')
# GPACalc.addGrade('A')
# GPACalc.addGrade('A')
# GPACalc.addGrade('B')

# GPACalc.addGrade('A')
# GPACalc.addGrade('A')
# GPACalc.addGrade('A')
# GPACalc.addGrade('A')
# GPACalc.addGrade('A') 

# print(GPACalc.calculateGPA())


#Weights
Labs = .32
Exams = .25
Prep = .08

#Out of 65%
print((Labs + Exams +Prep) * 100)

#Avg now
LabsList = [.6389]
ExamsList = [.67]
PrepList = [.9762]

#weighted grades calculations
LabAvg = LabsList[0] * Labs
ExamsAvg = (ExamsList[0] + .3)/2 * Exams
PrepAvg = PrepList[0]  * Prep
total = LabAvg + ExamsAvg + PrepAvg
print(round((total/.65)*100),2)) #round 2 decimal places


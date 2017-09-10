class Person:
	def __init__(self, firstName, lastName, idNumber):
		self.firstName = firstName
		self.lastName = lastName
		self.idNumber = idNumber
	def printPerson(self):
		print("Name:", self.lastName + ",", self.firstName)
		print("ID:", self.idNumber)
    
class Student(Person):
    def __init__(self,firstName,lastName,idNumber,scores):
        super().__init__(firstName, lastName, idNumber)
        self.scores = scores
    def calculate(self):
        avg = sum(self.scores)/len(self.scores)
        if 90<=avg<=100:
            ans = 'O'
        elif 80<=avg<90:
            ans = 'E'
        elif 70<=avg<80:
            ans = 'A'
        elif 55<=avg<70:
            ans = 'P'
        elif 40<=avg<55:
            ans = 'D'
        elif avg<40:
            ans = 'T'
        return ans
line = input().split()
firstName = line[0]
lastName = line[1]
idNum = line[2]
numScores = int(input()) # not needed for Python
scores = list( map(int, input().split()) )
s = Student(firstName, lastName, idNum, scores)
s.printPerson()
print("Grade:", s.calculate())

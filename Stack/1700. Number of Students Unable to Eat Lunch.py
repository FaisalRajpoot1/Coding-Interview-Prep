class Solution:
    def countStudents(self, students: List[int], sandwiches: List[int]) -> int:
        sandwichCount = 0
        while(students and sandwiches):
            if(students[0] == sandwiches[0]):
                students.pop(0)
                sandwiches.pop(0)
                sandwichCount = 0
            else:
                stu = students.pop(0)
                students.append(stu)
                sandwichCount +=1
                if(sandwichCount == len(students)):
                    break
        return len(students) 

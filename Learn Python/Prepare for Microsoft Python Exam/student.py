from student_class import student
jonathan_karr = student("Jonathan Karr", 4.365, False)
evan_wells = student("Evan Wells", 4.474,False)
gram_gram = student("Gram Gram", 3.823,False)
joe_blow = student("Joe Blow", 3.999,True)
list_of_students = [jonathan_karr, evan_wells, gram_gram, joe_blow]
for statement in list_of_students:
    print (statement.status())
# Anton and Polyhedrons
n=int(input())
shapes={"Tetrahedron":4,"Cube":6,"Octahedron":8,"Dodecahedron":12,"Icosahedron":20}
count=0
for i in range(n):
    str=input()
    count+=shapes[str]
print(count)

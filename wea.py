
def listOfDoom(lista):
    lista2 = lista.replace("->",".")
    lista2 = lista2.replace(".",",")
    lista2 = lista2.split(",")

    aux = []
    for i  in lista2:
        i = int(i)
        if i not in aux:        
            aux.append(i)
    aux.sort()
    return '->'.join(str(x) for x in aux)


print(listOfDoom("1->1->1->1,1->2->2->2,3->3->4->4"))









from operator import itemgetter
def person_lister(f):
    def inner(people):
        people=sorted(people,key=lambda x: int(x[2]))
        return [f(p) for p in people]
    return inner
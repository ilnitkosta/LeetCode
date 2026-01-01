from typing import List
def numUniqueEmails(self, emails: List[str]) -> int:
    unique = set()
        
    for e in emails:
        name,dom = e.split("@")
        name = name.split("+")[0]
        name = name.replace(".","")

        unique.add(f'{name}@{dom}')
    return len(unique)
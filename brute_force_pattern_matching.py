def brute_force_pattern_matching(s: str,p: str) -> bool:
    lens, lenp = len(s), len(p)
    if lens < lenp:
        raise ValueError("length of s must be greater than p")
    
    
    for i in range(lens - lenp  + 1):
        k: int = 0
        
        while k < lenp and s[i + k] == p[k]:
            k += 1
        if k == lenp:
            return True
    return False


if __name__ == '__main__':
    try:
        a: bool = brute_force_pattern_matching(input(),input())
        print(a)
    except ValueError as error:
        print(error)

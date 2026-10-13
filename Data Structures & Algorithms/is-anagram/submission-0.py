class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return "".join(sorted(s, key=str.lower)) == "".join(sorted(t, key=str.lower))
        
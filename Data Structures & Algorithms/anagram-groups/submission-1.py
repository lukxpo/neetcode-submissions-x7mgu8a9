class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        dicts = []
        for word in strs:
            tmp = {}
            for letter in word:
                if letter in tmp:
                    tmp[letter] += 1
                else:
                    tmp[letter] = 1
            
            found = False
            for item in dicts:
                if item[0] == tmp:
                    item[1].append(word)
                    found = True
                    break
            
            if not found:
                dicts.append((tmp, [word]))
            
        output = []

        for item in dicts:
            output.append(item[1])
        
        return output
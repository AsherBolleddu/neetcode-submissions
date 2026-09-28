class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        string_dict = defaultdict(list)
        for word in strs:
            count = [0] * 26
            for c in word:
                count[ord(c) - ord("a")] += 1
            
            string_dict[tuple(count)].append(word)

        return list(string_dict.values())
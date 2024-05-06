class Solution:
    def uniqueOccurrences(self, arr):
        count_map = {}
        occurrence_set = set()

        for num in arr:
            count_map[num] = count_map.get(num, 0) + 1

        for count in count_map.values():
            if count in occurrence_set:
                return False

            occurrence_set.add(count)

        return True

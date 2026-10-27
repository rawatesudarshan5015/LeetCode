class Solution(object):
    def quick_sort(self, l, r, arr):
        if l >= r:
            return

        i = l
        j = r - 1
        pivot = arr[r][0]

        while i <= j:
            while i <= j and arr[i][0] <= pivot:
                i += 1

            while i <= j and arr[j][0] >= pivot:
                j -= 1

            if i < j:
                arr[i], arr[j] = arr[j], arr[i]

        arr[i], arr[r] = arr[r], arr[i]

        self.quick_sort(l, i - 1, arr)
        self.quick_sort(i + 1, r, arr)

    def merge(self, intervals):
        if not intervals:
            return []

        self.quick_sort(0, len(intervals) - 1, intervals)

        i = 0
        for j in range(1, len(intervals)):
            if intervals[i][1] >= intervals[j][0]:
                intervals[i][1] = max(
                    intervals[i][1], intervals[j][1]
                )
            else:
                i += 1
                intervals[i] = intervals[j]

        return intervals[:i + 1]
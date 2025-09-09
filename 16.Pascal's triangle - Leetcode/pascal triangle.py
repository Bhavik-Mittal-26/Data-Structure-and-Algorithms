class Solution(object):  # Define the class
    def generate(self, numRows):  # Define the method with self and numRows as parameters
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        
        res = []  # Initialize the result list
        
        for i in range(numRows):  # Loop over each row index
            if i == 0:
                # First row is always [1]
                res.append([1])
            else:
                prev = res[-1]  # Get the previous row
                # Create the new row by summing adjacent elements and adding 1 at both ends
                row = [1] + [prev[j] + prev[j + 1] for j in range(len(prev) - 1)] + [1]
                res.append(row)  # Add the newly created row to the result
        
        return res  # Return the final list of rows

# Your code here
def prime?(number)
    (number==1) ? false:(2...number).none? {|d| number % d == 0}
end
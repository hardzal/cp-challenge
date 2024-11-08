def sum_terms(n)
  # your code here
    #(1..n).reduce(0) { |sum, val| sum+= (val*val + 1)}
    #(1..n).inject(0) {|total, val| total+= val**2 + 1}
    (0..n).inject {|sum, val| sum + (val**2 + 1)}
end
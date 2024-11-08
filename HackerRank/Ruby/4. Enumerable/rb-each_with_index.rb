def skip_animals(animals, skip)
  # Your code here
    arr = []
    animals.each_with_index { |item, index| arr << "#{index}:#{item}" if index >= skip }
    return arr
end
def end_arr_add(arr, element)
    # Add `element` to the end of the Array variable `arr` and return `arr`
    return arr.push(element)
end

def begin_arr_add(arr, element)
    # Add `element` to the beginning of the Array variable `arr` and return `arr`
    return arr.insert(0, element)
end

def index_arr_add(arr, index, element)
    # Add `element` at position `index` to the Array variable `arr` and return `arr`
    return arr.insert(index, element)
end

def index_arr_multiple_add(arr, index)
    # add any two elements to the arr at the index
    return arr.insert(index, index+1, index+2)
end

# .unshift is add any element at the beginning 
# Why use std::map instead of other containers


---------------|---------------|---------------
container      | Pros          | Cons        
---------------|---------------|---------------
std::vector<std::pair<std::string, double>> | - Simple to use             | - Linear search for specific dates, resulting in a slower lookup time for large datasets
                                            | - Allows sequential access  | - Insertion and deletion are less efficient for sorted data 
                                            | - Support sorting           | 
//
//  BaseType.h
//  RewriteFBRetainCycleDetector
//
//  Created by xn on 2020/11/17.
//

#import <Foundation/Foundation.h>
#import <string>

namespace FB { namespace RetainCycleDetector { namespace Parser {
class BaseType {
public:
    virtual ~BaseType(){}
};

class Unresolved: public BaseType {
public:
    std::string = value;
    Unresolved(std::string value) :value(value){}
    Unresolved(Unresolved &&) = default;
    Unresolved &operator=(Unresolved &&) = default;
    
    Unresolved(const Unresolved &) = delete;
    Unresolved &operator=(const Unresolved&) = delete;
};

} } }

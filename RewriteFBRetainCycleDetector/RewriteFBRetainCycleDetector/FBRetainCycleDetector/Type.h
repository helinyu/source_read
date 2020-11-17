//
//  Type.h
//  RewriteFBRetainCycleDetector
//
//  Created by xn on 2020/11/17.
//

#import <Foundation/Foundation.h>

#import <memory>
#import <string>
#import <vector>

#import "BaseType.h"

// 这里定义了一个类型的路径

namespace FB { namespace RetainCycleDetector { namespace Parser {
class Type: public BaseType {
    public :
    const std::string name;
    const std::string typeEncoding;
    
    Type(const std::string &name, const std::string &typeEncoding): name(name), typeEncoding(typeEncoding){}
    
    Type(Type&&) = default;
    Type &operator=(Type&&) = default;
    
    Type(const Type &) = delete;
    Type &operator = (const Type&) = delete;
    
    virtual void passTypePath(std::vector<std::string> typePath) {
        this->typePath = typePath;
    }
    
    std::vector<std::string> typePath;
};
}}}

//
//  FBAssociationManager.h
//  RewriteFBRetainCycleDetector
//
//  Created by xn on 2020/11/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


// 跟踪一个对象的关联， 给一个对象， 能够返回这个对象的所有的retain以及objc_setAssociatedObject使用retain的对象
@interface FBAssociationManager : NSObject

// 开始追踪关联， 它将使用fishhook 去交换C方法objc_(set/remove)AssociatedObject 并且插入
+ (void)hook;

// 停止追踪关联
+ (void)unhook;

// 返回一个对象的所有关联对象
+ (nullable NSArray *)associationsForObject:(nullable id)object;

@end

NS_ASSUME_NONNULL_END

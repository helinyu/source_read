//
//  FBAssociationManager.m
//  RewriteFBRetainCycleDetector
//
//  Created by xn on 2020/11/17.
//


//#if __has_feature(objc_arc)
//#error This file must be compiled with MRR. Use -fno-objc-arc flag.
//#endif
#warning -- 为什么需要在MRC的模式下， 还是说这个历史遗留的问题
// 为什么这个地方一定是要有MRC上面的呢？

#import <algorithm>
#import <map>
#import <mutex>
#import <objc/runtime.h>
#import <unordered_map>
#import <unordered_set>
#import <vector>

#import "FBAssociationManager.h"
#import "FBAssociationManager+Internal.h"

#import "fishhook.h"

#if _INTERNAL_RCD_ENABLED

namespace FB {
    namespace AssociationManager {
    namespace ObjectAssociationSet = std::unordered_set<void *>;
    using AssociationMap = std::unorder_map<id, ObjectAssociationSet *>;
}
}


#endif

@implementation FBAssociationManager


@end

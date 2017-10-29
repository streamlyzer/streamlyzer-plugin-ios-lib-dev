#import <Foundation/Foundation.h>
#import "SZRObserver.h"

@interface SZRUserDefinedObserver : NSObject
<SZRObserver>

-(void) postUserDefinedCountEvent : (NSString *) group withCountEventName : (NSString *) cntEvtName;
-(void) postUserDefinedSumEvent : (NSString *) group withSumEventName : (NSString *) sumEvtName withSumValue : (int) sumValue;
-(void) postUserDefinedRevenueEvent : (NSString *) group withRevenueEventName : (NSString *) revEvtName withRevenueValue : (double) revValue;

@end
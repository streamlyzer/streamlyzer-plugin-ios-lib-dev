#import <Foundation/Foundation.h>
#import "SZRObserver.h"

@interface SZRSharedContentsObserver : NSObject
<SZRObserver>

-(void) setProperties : (NSDictionary *) properties;
-(void) postSharedContentsEvent:(NSString *)evtGroup withDestination:(NSString *) destination;

@end

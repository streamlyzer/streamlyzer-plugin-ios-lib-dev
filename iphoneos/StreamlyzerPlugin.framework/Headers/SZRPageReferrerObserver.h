#import <Foundation/Foundation.h>
#import "SZRObserver.h"

@interface SZRPageReferrerObserver : NSObject
<SZRObserver>

-(void) setProperties : (NSDictionary *) properties;
-(void) postPageReferrerEvent : (NSString *) referrerHostName referrerPagePath:(NSString *) referrerPagePath currentPagePath:(NSString *) currentPagePath;

@end

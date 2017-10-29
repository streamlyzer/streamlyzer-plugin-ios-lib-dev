//
// © Copyright (c) 2015 Streamlyzer, Inc.  All content herein is protected by
// U.S. copyright and other applicable intellectual property laws and
// may not be copied without the express permission of Streamlyzer, Inc.,
// which reserves all rights.  Reuse of any of this content for any
// purpose without the permission of Streamlyzer, Inc. is strictly prohibited.
//
#import <Foundation/Foundation.h>

/**
 * Class that contains Streamlyzer Plugin methods
 */

@interface SZRPlugin : NSObject

+(void) initPlugin;
+(void) setDevMode:(BOOL)mode;
+(void) setDebugMode :(BOOL) mode;
+(void) setUrl : (NSString *) url;

@end

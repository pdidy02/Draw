/*
 *  CMLogItem.h
 *  CoreMotion
 *
 *  Copyright (c) 2010 Apple Inc. All rights reserved.
 *
 */

#import <Foundation/Foundation.h>

NS_CLASS_AVAILABLE(NA,4_0)
@interface CMLogItem : NSObject <NSCoding, NSCopying>
{
@private
	id _internalLogItem;
}

/*
 *  timestamp
 *  
 *  Discussion:
 *    Time at which the item is valid.
 *
 */
@property(readonly, nonatomic) NSTimeInterval timestamp;

@end

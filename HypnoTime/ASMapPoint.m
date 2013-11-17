//
//  ASMapPoint.m
//  HypnoTime
//
//  Created by Alan Sparrow on 11/18/13.
//  Copyright (c) 2013 Alan Sparrow. All rights reserved.
//

#import "ASMapPoint.h"

@implementation ASMapPoint

@synthesize coordinate, title;

- (id)initWithCoordinate:(CLLocationCoordinate2D)c title:(NSString *)t
{
    self = [super init];
    if (self) {
        coordinate = c;
        [self setTitle:t];
    }
    return self;
}

- (id)init
{
    return [self initWithCoordinate:CLLocationCoordinate2DMake(43.07, -89.32) title:@"Hometown"];
}

@end

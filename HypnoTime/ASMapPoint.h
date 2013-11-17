//
//  ASMapPoint.h
//  HypnoTime
//
//  Created by Alan Sparrow on 11/18/13.
//  Copyright (c) 2013 Alan Sparrow. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>

@interface ASMapPoint : NSObject <MKAnnotation>
{
    
}

// A new initializer for instances of ASMapPoint
- (id)initWithCoordinate:(CLLocationCoordinate2D)c title:(NSString *)t;

// This is a required property from MKAnnotation
@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;
// This is an optional property from MKAnnotation
@property (nonatomic, copy) NSString *title;

@end

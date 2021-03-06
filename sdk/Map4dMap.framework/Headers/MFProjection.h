//
//  MFProjection.h
//  Map4D
//
//  Created by tantv on 10/12/18.
//

#ifndef MFProjection_h
#define MFProjection_h
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
@class MFMapView;
@class MFCameraPosition;

@interface MFProjection : NSObject
- (instancetype _Nonnull ) init NS_UNAVAILABLE;

- (instancetype _Nonnull ) init: (MFMapView* _Nonnull ) mapView;

/** Maps an Earth coordinate to a point coordinate in the map's view. */
- (CGPoint) pointForCoordinate:(CLLocationCoordinate2D) coordinate;

/** Maps an Earth coordinate to a point coordinate at the elevation in the map's view. */
- (CGPoint) pointForCoordinate:(CLLocationCoordinate2D) coordinate elevation: (double) elevation;

/** Maps an Earth coordinate to a point coordinate in the map's view. */
- (CGPoint) pointForCoordinate:(CLLocationCoordinate2D) coordinate camera: (MFCameraPosition* _Nonnull) camera;
/** Maps an Earth coordinate to a point coordinate in the map's view. */
- (CGPoint) pointForCoordinate:(CLLocationCoordinate2D) coordinate camera: (MFCameraPosition* _Nonnull) camera elevation: (double) elevation is3DMode: (bool) is3DMode;

/** Maps a point coordinate in the map's view to an Earth coordinate. */
- (CLLocationCoordinate2D) coordinateForPoint:(CGPoint) point;

- (CLLocationCoordinate2D) coordinateForPoint:(CGPoint) point elevation: (double) elevation;

- (CLLocationCoordinate2D) coordinateForPoint:(CGPoint) point camera: (MFCameraPosition* _Nonnull) camera;

- (CLLocationCoordinate2D) coordinateForPoint:(CGPoint) point camera: (MFCameraPosition* _Nonnull) camera elevation: (double) elevation is3DMode: (bool) is3DMode;

@end

#endif /* MFProjection_h */

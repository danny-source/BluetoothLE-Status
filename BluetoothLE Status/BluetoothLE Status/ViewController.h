//
//  ViewController.h
//  BluetoothLE Status
//
//  Created by danny on 2014/1/20.
//  Copyright (c) 2014年 danny. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>

@interface ViewController : UIViewController <CBCentralManagerDelegate> {
    
}

@property (nonatomic,strong) CBCentralManager *CM;
@property (nonatomic,strong) CBPeripheral *connectedPeripheral;

@end

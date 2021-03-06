//
//  VoodooAtmelTouchWrapper.h
//  VoodooI2C
//
//  Created by Christopher Luu on 10/7/15.
//  Copyright © 2015 Alexandre Daoud. All rights reserved.
//

#ifndef VoodooI2C_VoodooCyapaMouseWrapper_h
#define VoodooI2C_VoodooCyapaMouseWrapper_h

#include <IOKit/hid/IOHIDDevice.h>

class VoodooI2CHIDDevice;

class VoodooAtmelTouchWrapper : public IOHIDDevice
{
    OSDeclareDefaultStructors(VoodooAtmelTouchWrapper)

public:
    virtual bool start(IOService *provider) override;
    
    virtual IOReturn setProperties(OSObject *properties) override;
    
    virtual IOReturn newReportDescriptor(IOMemoryDescriptor **descriptor) const override;
    
    virtual IOReturn setReport(IOMemoryDescriptor *report,IOHIDReportType reportType,IOOptionBits options=0) override;
    virtual IOReturn getReport(IOMemoryDescriptor *report,IOHIDReportType reportType,IOOptionBits options) override;
    
    virtual OSString* newManufacturerString() const override;
    virtual OSNumber* newPrimaryUsageNumber() const override;
    virtual OSNumber* newPrimaryUsagePageNumber() const override;
    virtual OSNumber* newProductIDNumber() const override;
    virtual OSString* newProductString() const override;
    virtual OSString* newSerialNumberString() const override;
    virtual OSString* newTransportString() const override;
    virtual OSNumber* newVendorIDNumber() const override;
    
    virtual OSNumber* newLocationIDNumber() const override;
};

#endif /* VoodooI2C_VoodooCyapaMouseWrapper_h */

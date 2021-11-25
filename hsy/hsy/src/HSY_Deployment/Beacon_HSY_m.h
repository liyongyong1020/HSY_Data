//
// Generated file, do not edit! Created by nedtool 5.5 from veins/modules/application/HSY_Deployment/Beacon_HSY.msg.
//

#ifndef __VEINS_BEACON_HSY_M_H
#define __VEINS_BEACON_HSY_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0505
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// dll export symbol
#ifndef VEINS_API
#  if defined(VEINS_EXPORT)
#    define VEINS_API  OPP_DLLEXPORT
#  elif defined(VEINS_IMPORT)
#    define VEINS_API  OPP_DLLIMPORT
#  else
#    define VEINS_API
#  endif
#endif

// cplusplus {{
#include "veins/base/utils/Coord.h"
#include "veins/modules/messages/BaseFrame1609_4_m.h"
#include "veins/base/utils/SimpleAddress.h"
// }}


namespace veins {

/**
 * Class generated from <tt>veins/modules/application/HSY_Deployment/Beacon_HSY.msg:28</tt> by nedtool.
 * <pre>
 * packet Beacon_HSY extends BaseFrame1609_4
 * {
 *     int senderIndex;
 *     Coord senderPos;
 *     double senderSpeed;
 *     int senderLaneId;
 * }
 * </pre>
 */
class VEINS_API Beacon_HSY : public ::veins::BaseFrame1609_4
{
  protected:
    int senderIndex;
    Coord senderPos;
    double senderSpeed;
    int senderLaneId;

  private:
    void copy(const Beacon_HSY& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Beacon_HSY&);

  public:
    Beacon_HSY(const char *name=nullptr, short kind=0);
    Beacon_HSY(const Beacon_HSY& other);
    virtual ~Beacon_HSY();
    Beacon_HSY& operator=(const Beacon_HSY& other);
    virtual Beacon_HSY *dup() const override {return new Beacon_HSY(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getSenderIndex() const;
    virtual void setSenderIndex(int senderIndex);
    virtual Coord& getSenderPos();
    virtual const Coord& getSenderPos() const {return const_cast<Beacon_HSY*>(this)->getSenderPos();}
    virtual void setSenderPos(const Coord& senderPos);
    virtual double getSenderSpeed() const;
    virtual void setSenderSpeed(double senderSpeed);
    virtual int getSenderLaneId() const;
    virtual void setSenderLaneId(int senderLaneId);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Beacon_HSY& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Beacon_HSY& obj) {obj.parsimUnpack(b);}

} // namespace veins

#endif // ifndef __VEINS_BEACON_HSY_M_H

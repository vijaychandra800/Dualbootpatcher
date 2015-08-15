// automatically generated, do not modify

package mbtool.daemon.v2;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

public class RebootResponse extends Table {
  public static RebootResponse getRootAsRebootResponse(ByteBuffer _bb) { return getRootAsRebootResponse(_bb, new RebootResponse()); }
  public static RebootResponse getRootAsRebootResponse(ByteBuffer _bb, RebootResponse obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__init(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public RebootResponse __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; return this; }

  public boolean success() { int o = __offset(4); return o != 0 ? 0!=bb.get(o + bb_pos) : false; }

  public static int createRebootResponse(FlatBufferBuilder builder,
      boolean success) {
    builder.startObject(1);
    RebootResponse.addSuccess(builder, success);
    return RebootResponse.endRebootResponse(builder);
  }

  public static void startRebootResponse(FlatBufferBuilder builder) { builder.startObject(1); }
  public static void addSuccess(FlatBufferBuilder builder, boolean success) { builder.addBoolean(0, success, false); }
  public static int endRebootResponse(FlatBufferBuilder builder) {
    int o = builder.endObject();
    return o;
  }
};


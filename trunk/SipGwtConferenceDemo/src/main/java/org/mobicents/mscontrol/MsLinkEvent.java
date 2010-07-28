/*
 * MsLinkEvent.java
 *
 * The Simple Media Server Control API
 *
 * The source code contained in this file is in in the public domain.
 * It can be used in any project or product without prior permission,
 * license or royalty payments. There is  NO WARRANTY OF ANY KIND,
 * EXPRESS, IMPLIED OR STATUTORY, INCLUDING, WITHOUT LIMITATION,
 * THE IMPLIED WARRANTY OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE,
 * AND DATA ACCURACY.  We do not warrant or make any representations
 * regarding the use of the software or the  results thereof, including
 * but not limited to the correctness, accuracy, reliability or
 * usefulness of the software.
 */
package org.mobicents.mscontrol;

import java.io.Serializable;

/**
 * Instance of MsLinkEvent is fired when ever state of {@link MsLink} is changed
 * 
 * @author Oleg Kulikov
 */
public interface MsLinkEvent extends Serializable {

	/**
	 * Returns the instance of <code>MsLink</code> who is firing this event
	 * 
	 * @return instance of <code>MsLink</code>
	 */
	public MsLink getSource();

	/**
	 * Returns the {@link MsLinkEventID} that represents the state of
	 * <code>MsLink</code>
	 * 
	 * @return instance of <code>MsLinkEventID</code>
	 */
	public MsLinkEventID getEventID();

	/**
	 * Returns the cause for <code>MsLinkEventID</code> to be fired
	 * 
	 * @return instance of <code>MsLinkEventCause</code>
	 */
	public MsLinkEventCause getCause();

	/**
	 * Returns the message associated with event
	 * 
	 * @return String message if any
	 */
	public String getMessage();
}

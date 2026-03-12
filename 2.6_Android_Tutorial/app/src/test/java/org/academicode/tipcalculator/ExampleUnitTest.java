package org.academicode.tipcalculator;

import static org.junit.Assert.assertEquals;

import org.junit.Test;

/**
 * Example local unit test, which will execute on the development machine
 * (host).
 *
 * @see <a href="http://d.android.com/tools/testing">Testing documentation</a>
 */
public class ExampleUnitTest {

    @Test
    public void testAdditionIsCorrect() {
        final int expected = 4;
        final int testValue = 2;
        assertEquals(expected, testValue + testValue);
    }
}

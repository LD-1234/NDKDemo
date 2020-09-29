package com.example.ndkdemo;

import org.junit.Test;

import static org.junit.Assert.*;

/**
 * Example local unit test, which will execute on the development machine (host).
 *
 * @see <a href="http://d.android.com/tools/testing">Testing documentation</a>
 */
public class ExampleUnitTest {
    @Test
    public void addition_isCorrect() {
        MainActivity mainActivity = new MainActivity();
        String ret = mainActivity.stringFromJNI();
        System.out.println(ret);
        assertEquals(4, 2 + 2);
    }
}